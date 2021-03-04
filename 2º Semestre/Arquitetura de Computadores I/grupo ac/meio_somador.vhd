library ieee;
use ieee.std_logic_1164.all;
 
entity meio_somador is port (
  a : in std_logic;
  b : in std_logic;
  soma : out std_logic;
  carry : out std_logic
);
end meio_somador;
 
architecture arch_meio_somador of meio_somador is

  begin
	soma <= (a and not b) or (not a and b);
  carry <= a and b;
  
end arch_meio_somador;
