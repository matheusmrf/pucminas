library ieee;
use ieee.std_logic_1164.all;

entity mult4x1 is port (
  r0, r1, r2, r3: in std_logic;
  operation: in std_logic_vector(2 downto 0);
  s: out std_logic
);

end mult4x1;

architecture arch_mult4x1 of mult4x1 is

  	begin

	with operation select 
    s <= r0 when "000",
    	   r1 when "001",
    	   r3 when "111",
     	   r2 when others;
  
end arch_mult4x1;
