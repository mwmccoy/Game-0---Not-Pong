#include "ColorTextureProgram.hpp"

#include "Mode.hpp"
#include "GL.hpp"

#include <glm/glm.hpp>

#include <vector>
#include <deque>

/*
 * PongMode is a game mode that implements a single-player game of Pong.
 */

struct PongBall {
	//PongBall();
	//~PongBall();
	
	glm::vec2 ball_radius = glm::vec2(0.2f, 0.2f);

	glm::vec2 ball = glm::vec2(0.0f, 0.0f);
	glm::vec2 ball_velocity = glm::vec2(-1.0f, 0.0f);

	bool should_delete = false;

	//----- pretty gradient trails -----

	float trail_length = 1.3f;
	std::deque< glm::vec3 > ball_trail; //stores (x,y,age), oldest elements first
};