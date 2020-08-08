flags = File::CREAT |File::RDWR

#ARGV[0]=program name
#ARGV[1]=opt
#ARGV[2]=debug
$mem = Array.new
$mem_new = Array.new
$var_count = 0
$clause_count = 0
$clause_k = Array.new
$d = ARGV[2]

g = ARGV[0].split(/_/)
gn = File.basename(ARGV[0], ".cnf")

#read input, count initial vars#
File.open("#{ARGV[0]}", 'r'){|f|
	while inline = f.gets
		if inline =~ /^c/
			next
		elsif inline =~ /^p/
			tmp = inline.chomp.split(/ /)
			$var_count = tmp[2].to_i
			$clause_count = tmp[3].to_i 
		elsif inline != nil
			$mem << inline.chomp.chop			
			a = inline.chomp.split(/ /)
			#find max variable id
			a.each{|y|
				if y.to_i.abs > $var_count 
					$var_count = y.to_i.abs
				end
			}
		end
	end
}

puts "initial var_count =  #{$var_count}"
#puts $mem

#convert to 3-SAT
for k in 0..$mem.size-1
	y = $var_count
	clause = $mem[k].split(/ /)		
	if clause.size <= 3
		$mem[k] = $mem[k] + "0"
		$mem_new << $mem[k]
	else
		while (clause.size >3)
			clause_new = "#{clause[0]} #{clause[1]} #{y+1} 0"
			clause.insert(clause.size,"-#{y+1}")
			clause.shift(2)
			#puts clause
			$mem_new << clause_new		
			y = y+1
		end
		clause_new = "#{clause[0]} #{clause[1]} #{clause[2]} 0"
		$mem_new << clause_new
		$var_count = y
	end
	
end
#puts $mem_new
puts "output var_count = #{$var_count}"
outfile = File.open("#{gn.chomp(".cnf.txt")}_recursive.cnf", "w")
outfile.puts $mem_new