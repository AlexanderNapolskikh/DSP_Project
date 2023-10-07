#pragma once

// Window parameters
// __________________
const int WIDTH_WIND = 1500;
const int HEIGHT_WIND = 800;

// ShowWind parameters
// __________________
const int W_WINDS = WIDTH_WIND / 2;
const int H_WINDS = HEIGHT_WIND / 2.8;

// Button parameters
// __________________
const int RADIO_RAD = 30;
const sf::Vector2f CONTROL_BUTTON_SIZE = sf::Vector2f(100, 120);
const sf::Vector2f CONTROL_BUTTON_SIZE_MICRO = sf::Vector2f(150, 150);

// Label_parameters
// __________________
const sf::Vector2f SIZE_LABEL = sf::Vector2f(250, 40);
const int DISTANCE = 10;

// Grid_param
// __________________
const int LINE_DEL = 10;
const sf::Vector2f SIZE_OLINEX = sf::Vector2f(W_WINDS - 2 * LINE_DEL, 3);
const sf::Vector2f SIZE_OLINEY = sf::Vector2f(3, H_WINDS - 2 * LINE_DEL);
// Ris_param
const sf::Vector2f SIZE_RISX = sf::Vector2f(1, H_WINDS - 2 * LINE_DEL);
const sf::Vector2f SIZE_RISY = sf::Vector2f(W_WINDS - 2 * LINE_DEL, 1);
const int DEL = 10;

// Rad_polyline_el
const int RADPOL = 5;
