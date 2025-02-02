#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_video.h>

int main(int argc, char *argv[]) {
  // initialize window
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindow("prism", 512, 512, SDL_WINDOW_RESIZABLE);

  // initialize event loop
  SDL_Event event;
  while (true) {
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_EVENT_QUIT:
      return 0;
    }
  }
  
  return 0;
}
