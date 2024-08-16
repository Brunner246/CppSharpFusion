#pragma once

#    ifdef CORE_EXPORTS
        /* We are building this library */
#      define CORE_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define CORE_API __declspec(dllimport)
#    endif