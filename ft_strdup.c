#include "libft.h"

char  *ft_strdup(const char *str)
{
  char  *dup;
  
  dup = malloc((ft_strlen(str) + 1) * sizeof(char));
  if (!dup)
  {
    return (NULL);
  }
  ft_memcpy(dup, str, ft_strlen(str) + 1);
  return (dup);
}
