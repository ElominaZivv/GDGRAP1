#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640,640,"Zivv Elomina", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    GLfloat vertices[]{
        0.f, 0.25f, 0.f,
        -0.5f, -0.5f, 0.f,
        0.5f, -0.5f,  0.f
    };

    GLuint indices[] = {
        0,1,2
    };

    /*
    GLuint VAO, VBO, EBO;

    glGenVertexArrays(1, &VAO);
    //Will create VBO and output an ID->VBO variable
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    //curVAO = null
    glBindVertexArray(VAO);
    //curVAO = VAO
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    //glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glBufferData(GL_ARRAY_BUFFER, sizeof(GL_FLOAT) * attributes.vertices.size(), &attributes.vertices[0], GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    //glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(GLuint) * mesh_indices.size(), mesh_indices.data(), GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    glBindVertexArray(VAO);
    */

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        //glBindVertexArray(VAO);
        //glDrawArrays(GL_TRIANGLES, 0, 3);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(-0.43f, 1.0f);
        glVertex2f(0.43f, 1.0f);
        glVertex2f(1.0f, 0.43f);
        glVertex2f(1.0f, -0.43f);
        glVertex2f(0.43f, -1.0f);
        glVertex2f(-0.43f, -1.0f);
        glVertex2f(-1.0f, -0.43f);
        glVertex2f(-1.0f, 0.43f);
        glEnd();
        

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}