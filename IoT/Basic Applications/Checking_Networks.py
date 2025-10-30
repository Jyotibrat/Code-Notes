import network
import time

wlan = network.WLAN(network.STA_IF)
wlan.active(True)

print("Scanning for WiFi networks...")
time.sleep(2)

networks = wlan.scan()
print(f"\nFound {len(networks)} networks:\n")

for net in networks:
    ssid = net[0].decode('utf-8')
    bssid = ':'.join('%02x' % b for b in net[1])
    channel = net[2]
    rssi = net[3]
    security = net[4]
    
    print(f"Network: {ssid}")
    print(f"  Signal: {rssi} dBm")
    print(f"  Channel: {channel}")
    print(f"  Security: {security}")
    print()

print("\nNow trying to connect...")
print("Enter your network name EXACTLY as shown above")