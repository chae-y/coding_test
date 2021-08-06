x,y,w,h = map(int,input().split()) #현재 x,y 사각형 (0,0),(w,0),(0,h),(w,h)
print(min(abs(x-w),abs(y-h),abs(x),abs(y)))