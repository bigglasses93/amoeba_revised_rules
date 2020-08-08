#ruby input_gen.rb <program name>
#e.g., ruby input_gen.rb link1

flags = File::CREAT |File::RDWR

#ARGV[0]=program name
#ARGV[1]=opt
#ARGV[2]=debug

$d = ARGV[2]

g = ARGV[0].split(/_/)
gn = File.basename(ARGV[0], ".cnf")
$newv = 0

outfile = File.open("#{gn}_out.cnf", "w")

def neg2(x)
	x =~ /\-(.+)/
	e = $+
	return (e == nil)? "-#{x}" : e
end

$mem = Array.new
$ones = Array.new
$zeros = Array.new

def ones_mem(x)
	$ones << x
	$ones.uniq!
end

def zeros_mem(x)
	$zeros << x
	$zeros.uniq!
end

def ones_zeros_update(x)
	x =~ /\-(.+)/
	e = $+
	if e == nil
		ones_mem(x)
		zeros_mem("-#{x}")
	else
		ones_mem(x)
		zeros_mem(e)
	end
end

$past = Array.new


File.open("#{ARGV[0]}", 'r'){|f|
	while inline = f.gets
		if inline =~ /^c/
			next
		elsif inline =~ /^p/
			tmp = inline.chomp.split(/ /)
			$newv = tmp[2].to_i + 1
		elsif inline != nil
			$mem << inline.chomp
			a = inline.chomp.split(/ /)
			ones_zeros_update(a[0]) if a.size == 2
		end
	end
}

s = Marshal.load(Marshal.dump($ones.size)) 

while s != 0 && ARGV[1] != nil
	for k in 0..$mem.size-1
		str = $mem[k].split(/ /)
		for i in 0..s-1
			if str.include?($zeros[i])
				str.delete($zeros[i]) 
				ones_zeros_update(str[0]) if str.size == 2 && !$past.include?(str[0])
			end
			k1 = str.index($ones[i])
			str[k1]="L1" if k1 != nil && str.size > 2
		end
		if str.include?("L1")
			$mem[k] = nil
		else 
			ones_zeros_update(str[0])  if str.size == 2 && !$past.include?(str[0])
			$mem[k] = str.join(" ")
		end
	end
	for j in 0..s-1
		$past << $ones[j]
		$past << $zeros[j]
	end
	$ones.shift(s)
	$zeros.shift(s)
	$mem.compact!
	s = Marshal.load(Marshal.dump($ones.size)) 
end

def var_count
	var = Array.new
	$mem.each{|x|
		y = x.split(/ /)
		y.each{|z|
			z =~ /\-(.+)/
			e = $+
			if e == nil
				var << z
			else
				var << e
			end
		}
	}
	var.uniq!.delete("0")
	return var.size
end

#p var_count
outfile.puts $mem if $d
outfile.puts "---------" if $d

for i in 0..$mem.size-1
	outfile.puts $mem[i] if $d
	#outfile.puts "---"
	a = $mem[i].split(/ /)
	#outfile.puts
	while a.size > 4#== 5
		outfile.puts "#{a[0]} #{a[1]} #{$newv.to_s} 0"
		a.shift(2)
		a.insert(a.size-1,"-#{$newv.to_s}")
		$newv = $newv+1
	end
	outfile.print a[0..a.size].join(" ")
	outfile.puts
	outfile.puts "+++++"if $d
end

p $newv-1
