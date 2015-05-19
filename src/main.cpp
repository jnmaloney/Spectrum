//
//  main.cpp
//  Spectrum
//
//  Created by J Maloney on 28/04/2015.
//  Copyright (c) 2015 J Maloney. All rights reserved.
//

#include <stdio.h>
#include "ScreenDraw.h"

#include "GL/glew.h"
#include "GLFW/glfw3.h"

int main(int argc, const char * argv[]) {
    
    GLFWwindow* window;
    
    /* Initialize the library */
    if (!glfwInit())
        return -1;
    
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // *!!
    //glfwWindowHint(GLFW_SAMPLES, 4);
   
    
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Spectrum", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    // Initialize GLEW
    glewExperimental = true; // Needed for core profile
    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        return -1;
    }
    
    // ...
    //Something* something = new Something();
    //something->SetShaders();
    
    ScreenDraw draw;
    draw.initialise();
    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        //something->DrawFrame();
        draw.present();
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);
        
        /* Poll for and process events */
        glfwPollEvents();
    }
    
    //delete something;
    
    glfwTerminate();
    
    return 0;
    
    // Original
    //return NSApplicationMain(argc, argv);
}
