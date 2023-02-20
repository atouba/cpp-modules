/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 20:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "InvalidForm.hpp"

const char*	Intern::InvalidForm::what() const _NOEXCEPT {
	return "the name of the form doesn't exist";
}