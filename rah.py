if _name_ == '_main_':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    a = 0
    for i in range(x):
        for j in range(y):

            for k in range(z):
                l[a] = [i,j,k]
                a = a+1
    list = [" " ]
    for i in range(a+1):
        list.insert(a,l[a])
    for items in list: