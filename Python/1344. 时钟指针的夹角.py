def angleClock(hour, minutes):
    angle_M = (minutes / 60) * 360
    angle_H = (hour % 12 / 12) * 360 + (minutes / 60) * 30
    angle = abs(angle_M - angle_H)

    if angle > 180:
        angle = 360 - angle
    return angle

hour = 12
minutes = 30
print(angleClock(hour, minutes))