from pyDatlog import pyDatalog
pyDatalog.create_terms("A,Pow2,Pow3")
def square(n):
    return n*n
pyDatalog.create_terms("square")
input_value=range(10)[::-1]
print(A in(input_values)&(Pow2==square(A)&Pow3==cube(A)))