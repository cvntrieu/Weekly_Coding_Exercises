




#include<iostream>  
#include "Painter.h"
#include<SDL.h>       
#include<SDL_image.h> 
#include<SDL_mixer.h> 
#include<SDL_ttf.h>   

using namespace std;


// Kích th??c c?a c?a s?
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Kích th??c c?a hình ?nh
const int IMAGE_WIDTH = 100;
const int IMAGE_HEIGHT = 100;
const string WINDOW_TITLE = "An Implementation of Code.org Painter";
void initSDL(SDL_Window*& window, SDL_Renderer*& renderer);
void quitSDL(SDL_Window* window, SDL_Renderer* renderer);
void logSDLError(std::ostream& os,
    const std::string& msg, bool fatal = false);
void waitUntilKeyPressed();
SDL_Texture* loadTexture(string path, SDL_Renderer* renderer);
void renderTexture(SDL_Texture* texture, int x, int y, SDL_Renderer* renderer); // PH?I ??NH NGH?A HÀM LÊN ?ÂY!!!

int main(int argc, char* argv[])
{

    // Kh?i t?o SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // T?o c?a s?
    SDL_Window* window = SDL_CreateWindow("Moving Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // T?o renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Load hình n?n
    SDL_Surface* backgroundSurface = IMG_Load("C:\\Users\\ADMIN\\source\\repos\\MyGameProject\\vecteezy_cartoon-colorful-panorama-of-spring-summer-beautiful-nature_7633071-1.jpg");
    if (backgroundSurface == nullptr) {
        std::cerr << "Failed to load background image! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Texture* backgroundTexture = SDL_CreateTextureFromSurface(renderer, backgroundSurface);
    SDL_FreeSurface(backgroundSurface); // Gi?i phóng b? nh? cho surface

    // Load hình ?nh c?n di chuy?n
    SDL_Surface* imageSurface = IMG_Load("C:\\Users\\ADMIN\\source\\repos\\MyGameProject\\Plane2.png");
    if (imageSurface == nullptr) {
        std::cerr << "Failed to load image! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Texture* imageTexture = SDL_CreateTextureFromSurface(renderer, imageSurface);
    SDL_FreeSurface(imageSurface); // Gi?i phóng b? nh? cho surface

    // V? trí và t?c ?? di chuy?n c?a hình ?nh
    int imageX = 0;
    int imageY = SCREEN_HEIGHT / 2 - IMAGE_HEIGHT / 2;
    int velocity = 1;

    // Event handler
    SDL_Event e;
    bool quit = false;

    // Vòng l?p chính
    while (!quit) {
        // X? lý s? ki?n
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
                break;
            }
        }

        // Xóa renderer
        SDL_RenderClear(renderer);

        // V? hình n?n
        SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);

        // Di chuy?n hình ?nh
        imageX += velocity;
        if (imageX > SCREEN_WIDTH) {
            imageX = -IMAGE_WIDTH;
        }

        // V? hình ?nh
        SDL_Rect destinationRect = { imageX, imageY, IMAGE_WIDTH, IMAGE_HEIGHT };
        SDL_RenderCopy(renderer, imageTexture, NULL, &destinationRect);

        // Update renderer
        SDL_RenderPresent(renderer);

        // Gi?i h?n t?c ?? khung hình
        SDL_Delay(10);
    }

    // Gi?i phóng b? nh? và thoát SDL
    SDL_DestroyTexture(backgroundTexture);
    SDL_DestroyTexture(imageTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

void initSDL(SDL_Window*& window, SDL_Renderer*& renderer)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        logSDLError(std::cout, "SDL_Init", true);

    window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) logSDLError(std::cout, "CreateWindow", true);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED |
        SDL_RENDERER_PRESENTVSYNC);

    if (renderer == nullptr) logSDLError(std::cout, "CreateRenderer", true);

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    SDL_RenderSetLogicalSize(renderer, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void logSDLError(ostream& os,
    const string& msg, bool fatal)
{
    os << msg << " Error: " << SDL_GetError() << endl;
    if (fatal) {
        SDL_Quit();
        exit(1);
    }
}

void quitSDL(SDL_Window* window, SDL_Renderer* renderer)
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void waitUntilKeyPressed()
{
    SDL_Event e;
    while (true) {
        if (SDL_WaitEvent(&e) != 0 &&
            (e.type == SDL_KEYDOWN || e.type == SDL_QUIT))
            return;
        SDL_Delay(100);
    }
}

SDL_Texture* loadTexture(string path, SDL_Renderer* renderer)
{
    SDL_Texture* newTexture = NULL;
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    if (loadedSurface == NULL)
        cout << "Unable to load image " << path << " SDL_image Error: "
        << IMG_GetError() << endl;
    else {
        newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        if (newTexture == NULL)
            cout << "Unable to create texture from " << path << " SDL Error: "
            << SDL_GetError() << endl;
        SDL_FreeSurface(loadedSurface);
    }
    return newTexture;
}

void renderTexture(SDL_Texture* texture, int x, int y, SDL_Renderer* renderer) {

    SDL_Rect dest;
    dest.x = x;
    dest.y = y;
    SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);

    SDL_RenderCopy(renderer, texture, NULL, &dest);
}



