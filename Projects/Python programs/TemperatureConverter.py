#FUNCTION TO CONVERT TEMPERATURE (FARENHEIT TO CELSUIS VISE VERSAL)

print("Is temperature in farenheit or celsius (f or c): ", end="")
temp_unit = (input())
temp_unit = temp_unit.lower()
temp = eval(input("What is the temperature value: "))

def convert(temp, temp_unit):
    if (temp_unit == 'f'):
        new_temp = 10*((temp-32)/18)
        return new_temp
    elif(temp_unit == 'c'):
        new_temp = ((18*temp)/10)+32
        return new_temp
    else:
        error = "Input Correct Unit!!"
        return error

converted_temp = convert(temp, temp_unit)
print(converted_temp)