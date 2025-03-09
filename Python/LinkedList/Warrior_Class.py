#! python3

class Warrior():
    def __init__(me, damage, speed, health):
        me.damage = damage
        me.speed = speed
        me.health = health

    def display(me):
        print("Damage: ", me.damage)
        print("Speed:  ", me.speed)
        print("Health: ", me.health)

This = Warrior(100, 40, 3)
This.display()

print()

Me = Warrior(1100,0,0)
Me.display()
