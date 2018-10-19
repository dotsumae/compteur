library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.all; --Pour gerer les unsigned necessaires aux additions de std_logic_vector


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity diviseur is
	port(
	divin : in std_logic;
	divrst : in std_logic;
	divout : out std_logic
	);
end diviseur;

architecture Behavioral of diviseur is
	signal i : std_logic_vector(32 downto 1); 
	constant facteur : natural := 16;
	
	begin
		--i <= (others => '0');
		
		process
		
		begin
				wait until rising_edge(divin);

			if divrst = '1' -- cas reset
					then i <= (others => '0');
							
			elsif i = std_logic_vector(to_unsigned(facteur, 32)) --preciser sur cb de bits la conv se fait --cas debordement
				then 
					i <= (others => '0');
					divout <= '1';
					
			else
				i <= std_logic_vector(unsigned(i) + 1);
				divout <= '0';
			end if;
	

		end process;

end Behavioral;

