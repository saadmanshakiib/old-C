puts 'ENTER A NUMBER '
number1 = gets.chomp()
puts 'ENTER ANOTHER NUMBER '
number2 = gets.chomp()
number3 = number1 + number2
puts 'AS A STRING - '
puts number3
puts 'NOW AS AN INTEGER NUMBER '
#if we run this, this will show the wrong result because in ruby,
#whatever we input it takes as a string. so here,we are inputing two numbers as a integer but ruby,
#taking it as a string.
#so what we have to do is - at first we have to convert those strings into integer.
#number1.to_i is the way to make it a integer.
number4 = number1.to_i + number2.to_i 
puts number4 
#if we use a floating number then we have to use number.to_f to convert it to a floating number 
puts 'ENTER A NUMBER '
number6 = gets.chomp()
puts 'ENTER ANOTHER NUMBER '
number7 = gets.chomp()
number5 = number6.to_f + number7.to_f
puts 'AS A FLOATING NUMBER -'
puts number5
