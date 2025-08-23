//
// Created by Panagiotis Karagiannis on 23/8/25.
//

#ifndef VERTEXUTILITY_H
#define VERTEXUTILITY_H
#include <span>

struct TriangleBuffers {
    unsigned int VAO;
    unsigned int VBO;
    unsigned int EBO;
};

struct TriangleBuffersWithoutEBO {
    unsigned int VAO;
    unsigned int VBO;
};

class VertexUtility {
public:
    static TriangleBuffers CreateTriangleWithTexture(const std::span<const float> &vertices,
                                                     const std::span<const unsigned int> &indices);

    static TriangleBuffersWithoutEBO CreateTriangleWithTexture(const std::span<const float> &vertices);
};


#endif //VERTEXUTILITY_H
