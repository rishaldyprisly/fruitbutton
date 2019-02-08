import pygame
import serial

pygame.mixer.init()

kick = pygame.mixer.Sound("C:/Users/ALIENWARE/Desktop/Drums/kick.wav")
snare = pygame.mixer.Sound("C:/Users/ALIENWARE/Desktop/Drums/snare.wav")
hat = pygame.mixer.Sound("C:/Users/ALIENWARE/Desktop/Drums/hat.wav")

ser = serial.Serial("COM3", 9600)
while True:
     ser_bytes = ser.readline().rstrip()
     print(ser_bytes)
     if (ser_bytes == "Kick"):
     	kick.play()
     elif (ser_bytes == "Hat"):
     	hat.play()
     elif (ser_bytes == "Snare"):
     	snare.play()
