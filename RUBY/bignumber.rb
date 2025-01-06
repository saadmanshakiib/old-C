def big(num1,num2)
    if num1>num2
        return num1
    else
        return num2
    end
end

    puts 'enter a number'
    num1 = gets.chomp.to_i
    puts 'enter a number'
    num2 = gets.chomp.to_i
      puts big(num1,num2)
