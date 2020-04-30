/**
 * \file main.c
 * \brief Главное тело программы
 */
#include "defines.h"

#include "secretNumber.h"

/**
 * \fn int main
 *
 * \author TheSawIsTheLaw
 *
 * \param[in] none
 *
 * \brief Точка входа
 *
 * \code
 * int check = secretNumber(PASSWORD, OUT_STREAM);
 *
 * return check;
 * \endcode
 *
 * \return Код ошибки или удачного завершения
 */
int main(void) {
    int check = secretNumber(PASSWORD, OUT_STREAM);

    return check;
}
