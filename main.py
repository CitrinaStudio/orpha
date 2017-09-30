""" Main module """
import pygame 

def main():
    pygame.init()
    screen = pygame.display.set_mode(DISPLAY) 
    pygame.display.set_caption("Orpha") 
    bg = Surface((WIN_WIDTH,WIN_HEIGHT)) 
                                        
    bg.fill(Color(BACKGROUND_COLOR))     

    while 1:
        for e in pygame.event.get(): 
            if e.type == QUIT:
                raise SystemExit("QUIT")
        screen.blit(bg, (0,0))     
        pygame.display.update()     
        

if __name__ == "__main__":
    main()