# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.

Input - Randomly generated values for sample size of 32 students.
Output - Student data file, Mark_data file and Sorted mark file are written during the execution of the program 
and no output is displayed

Summary:
This program is to sort the highest mark of a student in his tenth, twelth, ug academics. Sample size of 32 randomly generated.
Student data list contains sub list for 32 students, Each sub list zero index would be students name, 
first index would be unique RRN number prefixed with RRN+(4 integer digits), second index would be his tenth, 
third is twelth and fourth index is his ug marks.

"""
import random
import string
import operator

file_location = '/home/gopi34/codePractise/python/'

def random_data():
    student_data=[]
    for i in range(31):
        student_data.append(''.join(random.choice(string.ascii_lowercase) for x in range(6)))
        student_data.append('RRN'+''.join(random.choice(string.digits) for x in range(4)))
        student_data.append(int(''.join(random.choice(string.digits) for x in range(2))))
        student_data.append(int(''.join(random.choice(string.digits) for x in range(2))))
        student_data.append(int(''.join(random.choice(string.digits) for x in range(2))))
    student_data = [student_data[i:i+5] for i in range(0,len(student_data),5)]
    with open(file_location + "student_data.txt", "w") as stu:
        stu.write(str(student_data))
    return(student_data)

def get_highest():

    student_data = random_data()
    mark_data,final_result,final_ = [],[],[]
    
    for marks in student_data:
        mark_data.append(list(map(int,marks[2:])))
         
    for student in student_data:
        final_result.append(student[0:2])
    
    for highest,student in zip(mark_data,final_result):
        student.append(max(highest)) 

    final_ = sorted(final_result, key=operator.itemgetter(2), reverse=True) 

    with open(file_location +"final_data.txt", "w") as stu:
        stu.write(str(final_result)) 
    with open(file_location + "final_.txt", "w") as stu:
        stu.write(str(final_))    
    
    
get_highest()


