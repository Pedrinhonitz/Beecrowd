name = gets.chomp.to_s
x = gets.chomp.to_f
y = gets.chomp.to_f

sum = (y * 0.15) + x 

puts "TOTAL = R$ #{'%.2f' % sum}"