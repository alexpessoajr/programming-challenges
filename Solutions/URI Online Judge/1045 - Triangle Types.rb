
a, b, c = gets.split("\s").map(&:to_f).sort.reverse

if a >= b + c
  puts "NAO FORMA TRIANGULO"
else
  if a * a == b * b + c * c
    puts "TRIANGULO RETANGULO"
  end
  if a * a > b* b + c * c
    puts "TRIANGULO OBTUSANGULO"
  end
  if a * a < b * b + c * c
    puts "TRIANGULO ACUTANGULO"
  end
  if a == b and b == c
    puts "TRIANGULO EQUILATERO"
  elsif a == b or b == c or a == c
    puts "TRIANGULO ISOSCELES"
  end
end

