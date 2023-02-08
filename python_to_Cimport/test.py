import ctypes

lib = ctypes.CDLL("./lib_example.so")

l = [1, 2, 3]

lib.Print_list.argtypes = [ctypes.py_object]
lib.Print_list(l)
#lib.print()
