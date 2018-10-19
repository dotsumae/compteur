--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:12:48 10/18/2018
-- Design Name:   
-- Module Name:   /home/asalazar/Documents/VHDL/compteur8/test_cmpt_lent.vhd
-- Project Name:  compteur8
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: compteurlent
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_cmpt_lent IS
END test_cmpt_lent;
 
ARCHITECTURE behavior OF test_cmpt_lent IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT compteurlent
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
   uut: compteurlent PORT MAP (
          clk => clk,
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
      wait for 100 ns;	

      wait for clk_period*10;
		nrst <= '1';
		wait for clk_period*10;
		nrst <= '0';

      -- insert stimulus here 

      wait;
   end process;

END;
