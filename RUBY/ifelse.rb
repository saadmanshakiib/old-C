istall = true
ismale = false
if ismale
    puts 'you are a male'
elsif ismale and istall
    puts 'you are a tall male'
elsif ismale and !istall
    puts 'you are not a tall male'
elsif !ismale and istall 
    puts 'you are not a tall male'
else 
    puts 'you are not a male or tall'
end
