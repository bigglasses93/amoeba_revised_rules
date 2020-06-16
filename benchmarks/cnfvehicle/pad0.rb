<<<<<<< HEAD
outfile = File.open("#{ARGV[0]}/#{ARGV[0]}_out.cnf", "w")
outfile2 = File.open("#{ARGV[0]}/#{ARGV[0]}_cnf_info.txt", "w")

parray = Array.new
File.open("#{ARGV[0]}/#{ARGV[0]}_out.cnf.txt", 'r'){|f|
	while inline = f.gets
		str = inline.chomp.split(/ /)
		ps = 4 - str.size
		ps.times{str << "0"}
		parray << str.join(" ")
	end
}

cnt = 0
max_var = 0
for i in 0..parray.size-1
	outfile.print "#{parray[i]}"
	if i == parray.size-1
		tmp = parray[i].split(/ /)
		tmp.each{|x|
			if x.include?("-")
				x =~ /\-(.+)/
				y = $+.to_i
			else
				y = x.to_i
			end
			max_var = y if y > max_var
		}
	else
		cnt += 1
		outfile.puts 
	end
end

outfile2.puts "N_VARIABLE: #{max_var}"
outfile2.puts "N_CLAUSE: #{cnt}"
=======
outfile = File.open("#{ARGV[0]}/#{ARGV[0]}_out.cnf", "w")
outfile2 = File.open("#{ARGV[0]}/#{ARGV[0]}_cnf_info.txt", "w")

parray = Array.new
File.open("#{ARGV[0]}/#{ARGV[0]}_out.cnf.txt", 'r'){|f|
	while inline = f.gets
		str = inline.chomp.split(/ /)
		ps = 4 - str.size
		ps.times{str << "0"}
		parray << str.join(" ")
	end
}

cnt = 0
max_var = 0
for i in 0..parray.size-1
	outfile.print "#{parray[i]}"
	if i == parray.size-1
		tmp = parray[i].split(/ /)
		tmp.each{|x|
			if x.include?("-")
				x =~ /\-(.+)/
				y = $+.to_i
			else
				y = x.to_i
			end
			max_var = y if y > max_var
		}
	else
		cnt += 1
		outfile.puts 
	end
end

outfile2.puts "N_VARIABLE: #{max_var}"
outfile2.puts "N_CLAUSE: #{cnt}"
>>>>>>> 67563b8fc30b27bd921d4953446abe0cd5981fbd
