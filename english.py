t = int(input())
for _ in range(t):
    st = int(input())
    l = []
    while(st):
        l.append(input())
        st-=1
    print(l)
    for i in range(len(l)):
        k = 0
        j = 1
        if(l[i][k] == l[j][k]):
            count=1
            k+=1
            while(k < len(l[i]) or k < len(l[j]) ):
                if(l[i][k] == l[j][k]):
                    count+=1
                    k+=1
                else:
                    break
            print(count)
        '''for j in range(len(l[i])):
            if(l[i][k] == l[j][k]):
                k+=1
            else:
                break
        print(k)'''