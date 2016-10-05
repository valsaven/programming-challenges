while True:
    t = input('Value to convert (ºC): ')

    try:
        t = float(t)
        if t >= 0 or t < 0:
            break
    except:
        continue

f = (((9 / 5) * t) + 32)
k = t + 273.15

print('{0:g} ºF'.format(f))
print('{0:g} K'.format(k))
