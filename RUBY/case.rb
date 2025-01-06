def getdayname(day)
    day_name = ""

    case day
    when "mon"
        day_name = "monday"
    when "tue"
        day_name = "tuesday"
    when "wed"
        day_name = "wednesday"
    when "thurs"
        day_name = "thrusday"
    when "fri"
        day_name = "friday"
    when "sat"
        day_name = "saturday"
    when "sun"
        day_name = "sunday"
    else
        puts 'invalid day name'
          end
   return day_name
        end
    puts getdayname("mon")
