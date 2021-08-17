import math
#return the minimum required waterbombs to extinguish the fires in the array
def waterbombs(fire, w):
    num_of_bombs = 0

    
    fire_list = list(fire)
    fires_passed = []
    
    fire_count = 0
    i = 0
    while i < len(fire_list):
        if fire_list[i] == 'x' and i == len(fire_list) - 1: 
            fire_count += 1
            fires_passed.append(fire_count)
        
        if i < len(fire_list) - 1 and fire_list[i] == 'x' and fire_list[i + 1] != 'Y':
            fire_count += 1
        
        if i < len(fire_list) - 1 and fire_list[i] == 'x' and fire_list[i + 1] == 'Y':
            fire_count += 1
            fires_passed.append(fire_count)
            fire_count = 0
        
        if fire_list[i] == 'Y':
            fire_count = 0
    
        i += 1
            
    for f in fires_passed:
        num_of_bombs += math.ceil(f/w)


    return num_of_bombs
    
