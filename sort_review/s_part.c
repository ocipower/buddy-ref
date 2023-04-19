def partition(arr, low, high):
    pivot = arr[low]
    i = low + 1
    j = high

    while True:
        while i <= j and arr[i] <= pivot:
            i += 1
        while i <= j and arr[j] >= pivot:
            j -= 1
        if i <= j:
            arr[i], arr[j] = arr[j], arr[i]
        else:
            arr[low], arr[j] = arr[j], arr[low]
            return j

def find_middle_term(arr):
    low = 0
    high = len(arr) - 1
    mid = (low + high) // 2
    while True:
        pivot_index = partition(arr, low, high)
        if pivot_index == mid:
            return arr[pivot_index]
        elif pivot_index < mid:
            low = pivot_index + 1
        else:
            high = pivot_index - 1
