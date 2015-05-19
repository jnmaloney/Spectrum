//
//  ScreenDraw.h
//  Spectrum
//
//  Created by J Maloney on 19/05/2015.
//  Copyright (c) 2015 J Maloney. All rights reserved.
//

#ifndef __Spectrum__ScreenDraw__
#define __Spectrum__ScreenDraw__

#include <stdio.h>


#include "GL/glew.h"
#include "GLFW/glfw3.h"

class ScreenDraw
{
public:
    
    ScreenDraw();
    ~ScreenDraw();
    
    void initialise();
    
    void present();
    
protected:
    GLuint VertexArrayID;
    GLuint vertexbuffer;
    GLuint programID;
};

#endif /* defined(__Spectrum__ScreenDraw__) */
