LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY test_cmpt IS
END test_cmpt;
 
ARCHITECTURE behavior OF test_cmpt IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT compteur
    PORT(
         clk : IN  std_logic;
         nrst : IN  std_logic;
         nen : IN  std_logic;
         set : IN  std_logic;
         din : IN  std_logic_vector(7 downto 0);
         dout : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal nrst : std_logic := '0';
   signal nen : std_logic := '0';
   signal set : std_logic := '0';
   signal din : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal dout : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: compteur PORT MAP (
          clk => clk, --gauche : provient du component, droite = signal
          nrst => nrst,
          nen => nen,
          set => set,
          din => din,
          dout => dout
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 50 ns;	

      wait for clk_period*10;
		nrst <= '1'; wait for clk_period*10;
		set <= '1'; din <= "11111000"; wait for clk_period;
		set <= '0';

      -- insert stimulus here 

      wait;
   end process;

END;
