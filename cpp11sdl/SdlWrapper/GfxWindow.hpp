//
//  GfxWindow.hpp
//  FirstProject
//
//  Created by George Oros on 3/29/17.
//  Copyright © 2017 George Oros. All rights reserved.
//

#ifndef GfxWindow_hpp
#define GfxWindow_hpp

#include <string>
#include <memory>

#include "GfxSdlHeader.hpp"
#include "GfxRootClass.hpp"
#include "GfxSurface.hpp"

class GfxWindow final : public GfxRootClass
{
public:
    typedef SDL_Window SdlType;
    typedef SDL_Window* SdlTypePtr;

    GfxWindow(const std::string& title,const uint16_t width,const uint16_t height);

    GfxWindow() = delete;

    GfxWindow(const GfxWindow&) = delete;
    GfxWindow& operator=(const GfxWindow&) = delete;
    
    GfxWindow(GfxWindow&& win);
    GfxWindow& operator=(GfxWindow&& win);
    
    ~GfxWindow();

    void destroyWindow();

    std::string getTitle() const;
    uint16_t getWidth() const;
    uint16_t getHeight() const;
    std::unique_ptr<GfxSurface> getWindowSurface(void);

    void setTitle(const std::string& title);

    SdlTypePtr getAsSdlTypePtr() const;
private:
    SDL_Window* window_;
    std::string title_;
};

#endif /* GfxWindow_hpp */
