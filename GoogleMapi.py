import googlemaps
import json
import string
import time

gmaps = googlemaps.Client(key='KEY')#@@@@@@@@REPLACE WITH API KEY!!!!@@@@@
s_num = 1 #step number
origin = None
print("For input below please follow the format: City, State Code /n Example: Boston, MA")
if origin == None:
    origin = input("Enter a place of origin:")
    #if ("," not in origin): google client accepts other formats
        #origin = input("Enter a place of origin following format above:")
destination = None
if destination == None:
    destination = input("Please enter the city would you like directions to:")
    #if ("," not in destination): google client accepts other formats
        #origin = input("Where you would like to go? Please follow format above:")
trans_mode = ""
while trans_mode.lower() != "driving" and trans_mode.lower() != "bicycling" and trans_mode.lower() != "walking" and trans_mode.lower() != "transit":
    print("Please enter ond of the following options below: Driving, Bicycling, Walking, or Transit")
    trans_mode = input("Preferred mode of transprotation from above:").lower()
#goog_directions = "https://maps.googleapis.com/maps/api/directions/json?origin=Boston,+MA&destination=Santa+Carla,+CA&mode=driving&key=AIzaSyAg1ZGxNcWd_pefV6ZG3i_uJ30g-5TTY5c"
#directions from link used for reference to loate items in googlemaps library module
google_directions = gmaps.directions(origin, destination, mode=trans_mode.lower())
#for x in range(len(google_directions)): #Prints out what the url populates use .directions to set list used for comparison to link
    #print(google_directions[x])
for leg in google_directions[0]['legs']: #stays within google definded legs
    end = leg['end_address']
    begin = leg['start_address']
    total_distance = leg['distance']['text']
    total_time = leg['duration']['text']
    print("Getting directions from %s to %s" % (begin,end))
    time.sleep(1.2)
    print('You will travel approximately %s and your trip will take approximately %s' % (total_distance,total_time))
    time.sleep(1.2)
    for i in leg['steps']: #stays within legs within steps i = index
        html_instructions = i['html_instructions']
        html_instructions = html_instructions.replace("<b>","").replace("</div>","").replace("</b>","")
        html_instructions = html_instructions.replace('<div style="font-size:0.9em">'," ").replace("&nbsp;","")
        turn_distance= i['distance']['text']
        time_till_turn=i['duration']['text']
        print("step %s:" % s_num)
        print("In " + turn_distance + ", " + html_instructions + ". This should take you " + time_till_turn)
        s_num = s_num + 1
        time.sleep(.2) 
print("You have arrived at %s" % end)