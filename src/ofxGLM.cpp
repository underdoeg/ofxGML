#include "ofxGLM.h"


ofQuaternion toOf(glm::quat q) {
	return ofQuaternion(q.x, q.y, q.z, q.w);
}

ofVec3f toOf(glm::vec3 v) {
	return ofVec3f(v.x, v.y, v.z);
}

/////////////////////////////////////////
glm::vec3 toGlm(ofVec3f v) {
	return glm::vec3(v.x, v.y, v.z);
}

glm::quat toGlm(ofQuaternion q) {
	return glm::quat(q.w(), q.x(), q.y(), q.z());
}
