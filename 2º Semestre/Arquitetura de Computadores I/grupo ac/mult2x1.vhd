library ieee;
use ieee.std_logic_1164.all;

entity mult2x1 is port (
        val, binvert : in std_logic;
        s : out std_logic
);
end mult2x1;

architecture arch_mult2x1 of mult2x1 is
begin
    with binvert select
    s <= val when '0',
         binvert when others;

end arch_mult2x1;
