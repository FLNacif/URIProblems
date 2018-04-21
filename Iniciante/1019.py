seg = int(input())
hr = seg//3600
seg = seg%3600
min = seg//60
seg = seg%60

print("{}:{}:{}".format(hr,min,seg))