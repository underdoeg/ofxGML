#ifndef OFXGLM_H
#define OFXGLM_H

#include "glm/glm.hpp"
#include <glm/gtc/quaternion.hpp>
#include "ofMain.h"

//to of
ofQuaternion toOf(glm::quat q);
ofVec3f toOf(glm::vec3 v);

glm::quat toGlm(ofQuaternion q);
glm::vec3 toGlm(ofVec3f v);

#endif // OFXGLM_H
