puts 'ENTER A NUMBER(bigger first)'
number1 = gets.chomp().to_f
puts 'CHOOSE AN OPERATOR'
op = gets.chomp()
puts 'ENTER ANOTHER NUMBER'
number2 = gets.chomp().to_f
if op == "+"
   puts(number1+number2)
elsif op == "-"
    puts (number1 - number2)
elsif op == "/"
    puts(number1/number2)
elsif op == "%"
    puts (number1%number2)
elsif op == "*"
    puts (number1 * number2)
else puts 'ERROR!!!'
end

