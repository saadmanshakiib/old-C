#first use def and then give method a name 
#method starts with def_methodName and ends with "end"
def sayhi
    puts ' HI SHAKIB'
end
puts 'HI SAADMAN'
sayhi
puts 'HEY NISSAN'
#in this case ruby will print hi saadman at first and then it will define the method named 'sayhi' and print the method and then it will print the last one
def sayhello(name)
    puts ('HI '+name)
end
sayhello("preeti")
#returntype
def cube(num)
    num*num*num
end
puts cube(2)