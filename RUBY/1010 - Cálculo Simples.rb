vet = gets.chomp.split
vet1 = gets.chomp.split

x = vet[0].strip.to_i
y = vet[1].strip.to_i
z = vet[2].strip.to_f
x1 = vet1[0].strip.to_i
y1 = vet1[1].strip.to_i
z1 = vet1[2].strip.to_f

sum = (y * z) + (y1 * z1)

puts "VALOR A PAGAR: R$ #{'%.2f' % sum}"