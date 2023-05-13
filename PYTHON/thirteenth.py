import numpy as np
x = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])  # 2D Array
y = np.array([[[1, 2, 3, 4], [5, 6, 7, 8]], [[1, 2, 3, 4], [5, 6, 7, 8]]])  #3D Array
print(x)
print(y)

arr = np.array([[1,2,3,4],[7,8,9,0]])
w = arr.copy()
z = arr.view()
arr[0,1] = 5
print(arr)
print(w)
print(z)