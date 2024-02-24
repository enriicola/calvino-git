-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Dic 17, 2018 alle 14:16
-- Versione del server: 10.1.28-MariaDB
-- Versione PHP: 7.0.24

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `esame`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `evento`
--

CREATE TABLE `evento` (
  `Codice` bigint(20) NOT NULL,
  `Nome` varchar(50) NOT NULL,
  `Data e ora` datetime NOT NULL,
  `Prezzo` float NOT NULL,
  `Età minima` int(2) NOT NULL,
  `chiaveTipoEvento` bigint(20) NOT NULL,
  `chiaveUtente` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struttura della tabella `tipo_evento`
--

CREATE TABLE `tipo_evento` (
  `Codice` bigint(20) NOT NULL,
  `Categoria` varchar(20) NOT NULL,
  `Genere` varchar(20) NOT NULL,
  `Descrizione` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struttura della tabella `utente`
--

CREATE TABLE `utente` (
  `Nickname` varchar(20) NOT NULL,
  `Nome` varchar(10) NOT NULL,
  `Cognome` varchar(10) NOT NULL,
  `Data di nascita` date NOT NULL,
  `Email` varchar(40) NOT NULL,
  `Password` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `evento`
--
ALTER TABLE `evento`
  ADD PRIMARY KEY (`Codice`),
  ADD KEY `chiaveTipoEvento` (`chiaveTipoEvento`),
  ADD KEY `chiaveUtente` (`chiaveUtente`);

--
-- Indici per le tabelle `tipo_evento`
--
ALTER TABLE `tipo_evento`
  ADD PRIMARY KEY (`Codice`);

--
-- Indici per le tabelle `utente`
--
ALTER TABLE `utente`
  ADD PRIMARY KEY (`Nickname`),
  ADD UNIQUE KEY `Nickname` (`Nickname`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `evento`
--
ALTER TABLE `evento`
  MODIFY `Codice` bigint(20) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT per la tabella `tipo_evento`
--
ALTER TABLE `tipo_evento`
  MODIFY `Codice` bigint(20) NOT NULL AUTO_INCREMENT;

--
-- Limiti per le tabelle scaricate
--

--
-- Limiti per la tabella `evento`
--
ALTER TABLE `evento`
  ADD CONSTRAINT `evento_ibfk_1` FOREIGN KEY (`chiaveUtente`) REFERENCES `utente` (`Nickname`) ON DELETE NO ACTION ON UPDATE CASCADE;

--
-- Limiti per la tabella `tipo_evento`
--
ALTER TABLE `tipo_evento`
  ADD CONSTRAINT `tipo_evento_ibfk_1` FOREIGN KEY (`Codice`) REFERENCES `evento` (`chiaveTipoEvento`) ON DELETE NO ACTION ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
