# Weird Algorithm
# cses.fi/1068
N=int(input());print(N)
while N!=1:
    if N%2==0:N//=2
    else:N=N*3+1
    print(N)
# author: Jithin Antony
# profile: https://cses.fi/user/32631