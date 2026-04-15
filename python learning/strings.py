# text = "junIOR deVEloper"
# print(text.capitalize())  # Capitalizes the first letter and makes the rest lowercase
# print(text.lower())       # Converts the entire string to lowercase
# print(text.upper())       # Converts the entire string to uppercase

# age = 24
# student = (age < 15)  # Evaluates if the age is less than 15
# print(student)        # Prints True or False based on the condition
print("Quiz1")
print("\nQuestion 1:")
name = "  JOHn  ."
clean_name = name.strip().replace(".", "").lower()
print(clean_name)  

print("\nQuestion 2:")
sentence_one = "The Dog Breed is German Shepherd"
result_one = sentence_one[8:23]
print(result_one) 

sentence_two = "Defeats for the Clinton forces, this was her moment of triumph"
result_two = sentence_two[13:27]
print(result_two) 


print("\nQuestion 3:")
sentence = "The lazy dog; ran so fast; it hit the wall."
split_sentence = sentence.split(";")
print(split_sentence)  
print("Length of result:", len(split_sentence))

print("\nQuestion 4:")
first_name = "  Joh.n"
last_name = "   Do,e"
clean_first_name = first_name.strip().replace(".", "")
clean_last_name = last_name.strip().replace(",", "")
full_name = f"{clean_first_name} {clean_last_name}"#f string
print(full_name) 

print("\nQuestion 5:")
r = '["E","W","C"]'
clean_r = r.replace('[', '').replace(']', '').replace('"', '').replace(',', '')
print(clean_r)  

print("\n\nquiz2")
print("\nQuestion 1:")
temp = 56.8926 
print(round(temp))
print(int(temp + 1))

print("\nQuestion 2:")
print(round(temp,2)) 

print("\nQuestion 3 :")
print(round(temp,3))

print("\nQuestion 4:")
print(((temp-56)*10))
temp1 = str(temp)
print("8."+temp1[4:])