# libft

Это первый проект основного курса обучения в Школе 21. Написанную библиотеку в дальнейшем предлагается использовать во всех начальных школьных проектах.

Описание функционала можно прочитать на [Wiki](https://github.com/dbendu/libft/wiki)

#### История проекта

По заданию нам нужно было повторить поведение некоторых стандартных функций, объявленных в заголовочных файлах `string.h` и `ctype.h`. Таких, например, как memcpy, memset, strlen, isspace и т.п. Чтобы не возникало конфликта из-за переопределения функций, ко всем названиям добавляется префикс ft_ (от forty two в названии франшизы 42 School). Кроме того, в необязательной части задания предлагалось реализовать базовый интерфейс для работы с односвязным списком.

Первые проекты в школе должны быть написаны на языке C стандарта C99. При разработке проектов студентам запрещено использовать функции стандартной библиотеки. Исключение составляют `malloc`, `free`, `write` и еще небольшой набор функций, зависящий от проекта. Так что эта библиотека была необходима, чтобы не тратить каждый раз время на реализацию базового функционала, необходимого в проекте.

#### Как использовать

* Для компиляции библиотеки вызовите команду `make`. Она скомпилирует статическую библиотеку `libft.a`. Файл будет лежать в корневой директории проекта.
* Подключите библиотеку к своему проекту: `#include "libft.h"`
* Скомпилируйте ваш проект с флагом `-I libft/includes`
* При линковке используйте флаги `-L libft` и `-lft`

При обычной компиляции библиотеки будут использованы флаги `-Wall -Werror -Wextra -O2`. Если вам нужно отлаживать код, используйте команду `make debug`. Она компилирует библиотеку к флагами `-g -Wall -Werror -Wextra`. Название библиотеки для отладки: `libftdebug.a`. Не забудьте изменить флаг `-lft` на `-lftdebug`
